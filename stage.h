#pragma once

#include "AbstractScene.h"

class Stage : public AbstractScene
{
private:

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

