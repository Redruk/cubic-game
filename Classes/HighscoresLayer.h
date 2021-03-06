#ifndef __CUBIC_MENU_HIGHSCORESLAYER___
#define __CUBIC_MENU_HIGHSCORESLAYER___

#include "cocos2d.h"
#include <sstream>

class HighscoresLayer : public cocos2d::LayerColor
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    
    // implement the "static create()" method manually
    CREATE_FUNC(HighscoresLayer);
};

#endif // __HELLOWORLD_SCENE_H__
