#include "AppDelegate.h"
#include "CommonEnum.h"
#include "AppMacros.h"
#include "NativeManager.h"
#include "GamePlayManager.h"
#include "FiniteStateMachine.h"

USING_NS_CC;

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
    FiniteStateMachine::getInstance()->release();
    NativeManager::getInstance()->release();
    GamePlayManager::getInstance()->release();
}

bool AppDelegate::applicationDidFinishLaunching() {
    // initialize director
    CCDirector* pDirector = CCDirector::sharedDirector();
    CCEGLView* pEGLView = CCEGLView::sharedOpenGLView();

    pDirector->setOpenGLView(pEGLView);
	
    // turn on display FPS
    pDirector->setDisplayStats(true);
    
    pEGLView->setDesignResolutionSize(designResolutionSize.width, designResolutionSize.height, kResolutionFixedHeight);
    
    std::vector<std::string> searchPath;
    float ipadGap = (ipadResource.size.height - iphoneResource.size.height)/2;
    CCSize frameSize = pEGLView->getFrameSize();
    if( frameSize.height>(iphoneResource.size.height+ipadGap)) {
        searchPath.push_back(ipadResource.directory);
        pDirector->setContentScaleFactor(ipadResource.size.height/designResolutionSize.height);
    }
    else {
        searchPath.push_back(iphoneResource.directory);
        pDirector->setContentScaleFactor(iphoneResource.size.height/designResolutionSize.height);
    }
    
    CCFileUtils::sharedFileUtils()->setSearchPaths(searchPath);


    // set FPS. the default value is 1.0/60 if you don't call this
    pDirector->setAnimationInterval(1.0 / 60);

    // run with scene
    FiniteStateMachine::getInstance()->start();
    

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    CCDirector::sharedDirector()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    CCDirector::sharedDirector()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}
