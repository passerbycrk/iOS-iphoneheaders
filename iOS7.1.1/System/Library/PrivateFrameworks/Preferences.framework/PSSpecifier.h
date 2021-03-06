/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSMutableDictionary, CNFRegAlias, IMAccount;

@interface PSSpecifier : NSObject {

	id target;
	SEL getter;
	SEL setter;
	SEL action;
	SEL cancel;
	Class detailControllerClass;
	long long cellType;
	Class editPaneClass;
	long long keyboardType;
	long long autoCapsType;
	long long autoCorrectionType;
	unsigned long long textFieldType;
	NSString* _name;
	NSArray* _values;
	NSDictionary* _titleDict;
	NSDictionary* _shortTitleDict;
	id _userInfo;
	NSMutableDictionary* _properties;
	SEL _confirmationAction;
	SEL _confirmationCancelAction;
	SEL _buttonAction;
	SEL _controllerLoadAction;
	bool _showContentString;

}

@property (nonatomic,@dynamic,retain) CNFRegAlias * CNFRegAlias; 
@property (nonatomic,@dynamic,retain) CNFRegAlias * CNFRegCallerIdAlias; 
@property (nonatomic,@dynamic,retain) IMAccount * CNFRegAccount; 
@property (nonatomic,retain) NSArray * values;                                        //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id userInfo;                                             //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * titleDictionary;                          //@synthesize titleDict=_titleDict - In the implementation block
@property (nonatomic,retain) NSDictionary * shortTitleDictionary;                     //@synthesize shortTitleDict=_shortTitleDict - In the implementation block
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) id target; 
@property (assign,nonatomic) Class detailControllerClass; 
@property (assign,nonatomic) long long cellType; 
@property (assign,nonatomic) Class editPaneClass; 
@property (assign,nonatomic) SEL confirmationAction;                                  //@synthesize confirmationAction=_confirmationAction - In the implementation block
@property (assign,nonatomic) SEL confirmationCancelAction;                            //@synthesize confirmationCancelAction=_confirmationCancelAction - In the implementation block
@property (assign,nonatomic) SEL buttonAction;                                        //@synthesize buttonAction=_buttonAction - In the implementation block
@property (assign,nonatomic) SEL controllerLoadAction;                                //@synthesize controllerLoadAction=_controllerLoadAction - In the implementation block
@property (assign,nonatomic) bool showContentString;                                  //@synthesize showContentString=_showContentString - In the implementation block
+(id)groupSpecifierWithName:(id)arg1 footer:(id)arg2 ;
+(id)textFieldSpecifierWithName:(id)arg1 property:(id)arg2 target:(id)arg3 ;
+(id)groupSpecifierWithName:(id)arg1 subheader:(id)arg2 footer:(id)arg3 ;
+(id)groupSpecifierWithName:(id)arg1 subheader:(id)arg2 ;
+(id)switchSpecifierWithName:(id)arg1 property:(id)arg2 target:(id)arg3 ;
+(id)buttonSpecifierWithName:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
+(void)updateSpecifiers:(id)arg1 withTarget:(id)arg2 ;
+(id)switchSpecifierWithTitle:(id)arg1 target:(id)arg2 setter:(SEL)arg3 getter:(SEL)arg4 key:(id)arg5 ;
+(id)buttonSpecifierWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 confirmationInfo:(id)arg4 ;
+(id)_dataclassIconCache;
+(id)_iconForDataclass:(id)arg1 ;
+(id)acui_specifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 ;
+(id)acui_linkListCellSpecifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 ;
+(id)acui_specifierForAppWithBundleID:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 ;
+(id)_bundle;
+(id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2 linkButtons:(id)arg3 ;
+(id)groupSpecifierWithFooterLinkButton:(id)arg1 ;
+(id)groupSpecifierWithFooterText:(id)arg1 linkButton:(id)arg2 ;
+(id)groupSpecifierWithFooterText:(id)arg1 linkButtons:(id)arg2 ;
+(id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2 ;
+(id)deleteButtonSpecifierWithName:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
+(id)emptyGroupSpecifier;
+(id)groupSpecifierWithName:(id)arg1 ;
+(id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7 ;
+(long long)autoCorrectionTypeForNumber:(id)arg1 ;
+(long long)autoCapsTypeForString:(id)arg1 ;
+(long long)keyboardTypeForString:(id)arg1 ;
-(id)domain;
-(void)setUsage:(unsigned long long)arg1 ;
-(unsigned long long)diskUsage;
-(bool)isEditableCaptionProfile;
-(id)acui_dataclass;
-(id)acui_appBundleID;
-(id)CNFRegAlias;
-(id)CNFRegAccount;
-(void)setCNFRegAccount:(id)arg1 ;
-(void)setCNFRegAlias:(id)arg1 ;
-(id)CNFRegCallerIdAlias;
-(void)setCNFRegCallerIdAlias:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setTarget:(id)arg1 ;
-(id)userInfo;
-(void)setName:(id)arg1 ;
-(void)setValues:(id)arg1 ;
-(id)values;
-(id)name;
-(id)target;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)properties;
-(void)setUserInfo:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(void)setButtonAction:(SEL)arg1 ;
-(SEL)buttonAction;
-(void)setValues:(id)arg1 titles:(id)arg2 ;
-(void)setKeyboardType:(long long)arg1 autoCaps:(long long)arg2 autoCorrection:(long long)arg3 ;
-(void)removePropertyForKey:(id)arg1 ;
-(bool)showContentString;
-(SEL)controllerLoadAction;
-(SEL)confirmationAction;
-(long long)cellType;
-(SEL)confirmationCancelAction;
-(void)setControllerLoadAction:(SEL)arg1 ;
-(void)setupIconImageWithPath:(id)arg1 ;
-(void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3 ;
-(void)setTitleDictionary:(id)arg1 ;
-(void)setShortTitleDictionary:(id)arg1 ;
-(void)loadValuesAndTitlesFromDataSource;
-(void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3 usingLocalizedTitleSorting:(bool)arg4 ;
-(void)setupIconImageWithBundle:(id)arg1 ;
-(id)shortTitleDictionary;
-(long long)titleCompare:(id)arg1 ;
-(Class)detailControllerClass;
-(void)setDetailControllerClass:(Class)arg1 ;
-(void)setCellType:(long long)arg1 ;
-(Class)editPaneClass;
-(void)setEditPaneClass:(Class)arg1 ;
-(id)titleDictionary;
-(void)setConfirmationAction:(SEL)arg1 ;
-(void)setConfirmationCancelAction:(SEL)arg1 ;
-(void)setShowContentString:(bool)arg1 ;
@end

