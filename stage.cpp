#include "Stage.h"
#include "DxLib.h"
#include "math.h"

//�R���X�g���N�^
Stage::Stage()
{
	//�X�e�[�W�摜�̓ǂݍ���
	StageImages = LoadGraph("Resources/Images/Stage_Sea01.png");
	StageImages1 = LoadGraph("Resources/Images/Stage_Footing01.png");
}

//�f�X�g���N�^
Stage::~Stage()
{

}

//�X�V
AbstractScene* Stage::Update()
{
	return this;
}

//�`��
void Stage::Draw() const
{
	DrawExtendGraph(0, 450,640,480, StageImages, FALSE);
	DrawGraph(-50, 430, StageImages1, FALSE);
	DrawGraph(370, 430, StageImages1, FALSE);
	DrawGraph(180, 250, StageImages1, FALSE);
	DrawBox(0, 430, 230, 450, 0xff0000, FALSE);
	DrawBox(370, 430, 640, 450, 0xff0000, FALSE);
	DrawBox(180, 250, 460, 270, 0xff0000, FALSE);
}