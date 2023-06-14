/********************************
* �V�[���}�l�[�W���[
* ��ҁF����
********************************/
#include "SceneManager.h"

// �V�[���X�V�����o�֐�
AbstractScene* SceneManager::Update() {
	AbstractScene* p = mScene->Update();

	if (p != mScene) {
		delete mScene;
		mScene = p; // ���ɕ\���������V�[��
	};

	return p;
};

// �V�[���`�惁���o�֐�
void SceneManager::Draw() const {
	mScene->Draw();
};