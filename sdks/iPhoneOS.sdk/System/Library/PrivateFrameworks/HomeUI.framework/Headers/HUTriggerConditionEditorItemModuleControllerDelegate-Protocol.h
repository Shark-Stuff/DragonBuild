//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HFConditionCollection, HUTriggerConditionEditorItemModuleController, UIViewController;
@protocol HUPreloadableViewController;

@protocol HUTriggerConditionEditorItemModuleControllerDelegate <NSObject>
- (void)conditionEditorModuleController:(HUTriggerConditionEditorItemModuleController *)arg1 dismissDetailViewController:(UIViewController<HUPreloadableViewController> *)arg2;
- (void)conditionEditorModuleController:(HUTriggerConditionEditorItemModuleController *)arg1 presentDetailViewController:(UIViewController<HUPreloadableViewController> *)arg2;

@optional
- (void)conditionEditorModuleController:(HUTriggerConditionEditorItemModuleController *)arg1 didUpdateConditionCollection:(HFConditionCollection *)arg2;
@end
