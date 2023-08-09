#include "TitleScene.h"

#include "DxLib.h"

#include "InputControl.h"

#include "SceneManager.h"

/********************************
*�}�N����`
********************************/

/********************************
*�^��`
********************************/

/********************************
*�ϐ��錾
********************************/
int TitleImage;

int TitleBGM;

/********************************
*�v���g�^�C�v�錾
********************************/

/********************************
*�^�C�g����ʁF����������
* �����F�Ȃ�
* �߂�l�F�G���[���
********************************/

int TitleSCene_initialize(void)
{
	int ret = 0;

	//��ʓǂݍ��ݏ���
	TitleImage = LoadGraph("images/title_bgm.png");

	//�����ǂݍ��ݏ���
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
*�^�C�g����ʁF�X�V����
* �����F�Ȃ�
* �߂�l�F�Ȃ�
********************************/
void TitleScene_Update(void)
{
	//�^�C�g��BGM
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