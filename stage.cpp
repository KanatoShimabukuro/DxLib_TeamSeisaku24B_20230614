#include "Stage.h"
#include "DxLib.h"

//�R���X�g���N�^
Stage::Stage()
{

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
	DrawString(250, 240 - 32, "Hello C World!", 0xffffff);
}