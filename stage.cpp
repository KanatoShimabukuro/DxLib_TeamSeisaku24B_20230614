#include "Stage.h"
#include "DxLib.h"

//�R���X�g���N�^
Stage::Stage()
{
	//�X�e�[�W�摜�̓ǂݍ���
	StageImages = LoadGraph("Resources/Images/Stage_Sea01.png");

}

//�f�X�g���N�^
Stage::~Stage()
{

}

AbstractScene* Stage::Update()
{
	return this;
}

//�`��
void Stage::Draw() const
{
	//�X�e�[�W�摜�̕\��
	DrawGraph(300, 0, StageImages, FALSE);
	
}