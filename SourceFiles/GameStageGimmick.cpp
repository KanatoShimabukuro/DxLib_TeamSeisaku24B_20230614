﻿
/********************************
* ゲームステージギミック処理
* 編集者：
********************************/
#define _USE_MATH_DEFINES
#include "main.h"

GameStageGimmick::GameStageGimmick() {
	// シャボン玉画像読込
	LoadDivGraph("Resources/Images/Stage/Stage_BubbleAnimation.png", 4, 4, 1, 64, 64, img_bubble);
};

GameStageGimmick::~GameStageGimmick() {
	for (int i = 0; i < 4; i++) {
		DeleteGraph(img_bubble[i]);
	};
};

void GameStageGimmick::BubbleUpdate() {
	for (int i = 0; i < BUBBLE_MAX; i++) {
		if (bubble[i].flg) {
			bubble[i].frameCounter++;
			if (bubble[i].y < -70) bubble[i].flg = 0;
			else {
				bubble[i].y--;

				float swingMax = 100.0f;
				float moveX = swingMax * sin(2 * M_PI * bubble[i].frameCounter / 240.0f);

				if (bubble[i].flg == 1) bubble[i].drawX = bubble[i].x + moveX;
				else bubble[i].drawX = bubble[i].x - moveX;
			};
		};
	};
};

void GameStageGimmick::BubbleDraw() const {

	// シャボン玉の描画
	for (int i = 0; i < BUBBLE_MAX; i++) {
		if (bubble[i].flg) DrawRotaGraph(bubble[i].drawX, bubble[i].y, 1.0f, 0, img_bubble[bubble[i].anim], TRUE);
		//DrawFormatString(10, 50 + (15 * i), 0xffffff, "%d : x:%f y:%f flg:%d drawX:%f", i, bubble[i].x, bubble[i].y, bubble[i].flg, bubble[i].drawX);
	};
};


