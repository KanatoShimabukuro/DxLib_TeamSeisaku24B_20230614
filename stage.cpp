#include "Stage.h"
#include "DxLib.h"

//�R���X�g���N�^
Stage::Stage()
{
	//�X�e�[�W�摜�̓ǂݍ���
	StageImages = LoadGraph("Resources/images/Stage1.png");
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
	DrawExtendGraph(0, 0, 640, 480, StageImages, TRUE);
	//�v���C���[�̉��\��
	
}