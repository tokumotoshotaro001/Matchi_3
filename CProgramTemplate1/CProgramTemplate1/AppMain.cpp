/*********************************
*プログラミング実習
*マッチ3ゲームの製作
*********************************/
#include "DxLib.h"

#include "FreamControl.h"

#include "InputControl.h"

#include "SceneManager.h"

/********************************
*マクロ定義
********************************/

#define SCREEN_HEIGHT (480) //スクリーンサイズ(高さ)

#define SCREEN_HEIGHT (480) //スクリーンサイズ(高さ)

#define SCREEN_COLORBIT (32) //スクリーンカラービット

#define FONT_SIZE (32) //文字サイズ

/********************************
*型定義
********************************/

/********************************
*グローバル変数宣言
********************************/

/********************************
*プロトタイプ宣言
********************************/

/********************************
*プログラムの開始
********************************/

int WINAPI WinMain(_in_HINSTANCE hinstance, _In_opt_HINSTANCE hPrevInstance,
	_In_LPSTR lpCmdLine, _In_int nShowCmd)

{
	//ウィンドウタイトル設定
	SetMainWindowText("Match 3 Puzzle");

	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//画面サイズの最大サイズ、カラービット数を設定
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEGHT, SCREEN_COLORBIT);
	
	//Dxライブラリ初期化処理
	
	//エラーが発生したら、終了する

	if (SeneManager_Initialize(E_TITLE) == D_ERROR)
	{
		return D_ERROR;
	}
	
	//各機能の初期化処理
	FreamControl_Initiakize(); //フレームレート制御機能
	Input_Initialize(); //入力制御機能

	//シーンマネージャー初期化処理
	//えらーがはっせいしたら、終了する
	if (SceneManager_Initialize(E_TITLE) == D_ERROR)
	{
		return D_ERROR
	}

	//描画先画面を裏にする
	SetFontSize(FONT_SIZE);

	//ゲームループ
	while (ProcessMessage() != D_ERROR && input_Escape() == FALSE)
	{
		//入力制御機能更新処理
		Input_Upsate();

		//シーンマネージャー更新処理
		SceneManager_Updata();

		//画面クリア
		ClearDrawScreen();

		//シーンマネージャー描画処理
		SceneManager_Draw();

		//フレームレート制御処理
		FreamControl_Update();

		//画面の内容を表画面に反映
		screenFlip();
	}
	//Dxライブラリ使用の終了処理
	DxLib_end();

	return 0;

}

