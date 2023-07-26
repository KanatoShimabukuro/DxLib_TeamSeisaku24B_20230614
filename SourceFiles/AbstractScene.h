﻿/********************************
* シーンマネージャー
* 作者：島袋
********************************/
#pragma once

// デフォルトの抽象シーンクラス
class AbstractScene {
public:
	// デストラクタ
	virtual ~AbstractScene() {};

	// 描画以外の更新を実装
	virtual AbstractScene* Update() = 0;

	// 描画に関することを実装
	virtual void Draw() const = 0;
};