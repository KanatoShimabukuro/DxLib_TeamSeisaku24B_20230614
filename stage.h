#pragma once
#include "SourceFiles/AbstractScene.h"
#include "SourceFiles/GameScene.h"

class Stage : public AbstractScene
{
private:
	int StageImages;
	int StageImages1;

public:
	//�R���X�g���N�^
	Stage();
	//�f�X�g���N�^
	~Stage();
	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;
	//�`��ȊO�Ɋւ��邱�Ƃ�����
	void Draw() const override;
};

