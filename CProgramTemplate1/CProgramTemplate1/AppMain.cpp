#include "DxLib.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPprevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);


	//Dx���C�u�����[�̏���������

	if (DxLib_Init() == -1)

	{

		return -1;
	}


	//���͑҂�

	WaitKey();

	DxLib_End();


	return 0;
}