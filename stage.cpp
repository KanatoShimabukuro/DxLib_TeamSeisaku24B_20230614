#include "Stage.h"
#include "DxLib.h"

//�R���X�g���N�^
Stage::Stage()
{
	//�X�e�[�W�摜�̓ǂݍ���
	StageImages = LoadGraph("Resources/Images/���X�e�[�W�O.png");

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
	DrawGraph(0, 0, StageImages, TRUE);
	//�v���C���[�̉��\��
	
}