#include "TitleScene.h"

#include "DxLib.h"

#include "InputControl.h"

#include "SceneManager.h"

/********************************
*マクロ定義
********************************/

/********************************
*型定義
********************************/

/********************************
*変数宣言
********************************/
int TitleImage;

int TitleBGM;

/********************************
*プロトタイプ宣言
********************************/

/********************************
*タイトル画面：初期化処理
* 引数：なし
* 戻り値：エラー情報
********************************/

int TitleSCene_initialize(void)
{
	int ret = 0;

	//画面読み込み処理
	TitleImage = LoadGraph("images/title_bgm.png");

	//音声読み込み処理
	TitleBGM = LoadSoundMem("sounds/title_bgm.mp3");

	if (TitleImage == D_ERROR)
	{
		ret = D_ERROR;
	}

	if (TitleBGM == D_ERROR)
	{
		ret = D_ERROR;
	}
	return ret;
}

/********************************
*タイトル画面：更新処理
* 引数：なし
* 戻り値：なし
********************************/
void TitleScene_Update(void)
{
	//タイトルBGM
	if (CheckSoundMem(TitleBGM) == 0)
	{
		PlaySoundMem(TitleBGM, DX_PLAYTYPE_BACK);
	}

	if (GetKeyFlg(MOUSE_INPUT_LEFT) == TRUE)
	{
		if (GetMousePositionX() > 120 && GetMousePositionX() < 290 && GetMousePositionY() > 260 && GetMousePositionY() < 315)
		{

		}
	}
}