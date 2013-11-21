//
//  ViewController.h
//  Prototype_Application
//
//  Created by projetlp2013 on 05/11/2013.
//  Copyright (c) 2013 projetlp2013. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITabBar *barre;
@property (weak, nonatomic) IBOutlet UITabBarItem *Accueil;
@property (weak, nonatomic) IBOutlet UITabBarItem *formation;
@property (weak, nonatomic) IBOutlet UITabBarItem *agenda;
@property (weak, nonatomic) IBOutlet UITabBarItem *campus;
@property (weak, nonatomic) IBOutlet UITabBarItem *autre;

@property (weak, nonatomic) IBOutlet UIImageView *LogoIUT;
@property (weak, nonatomic) IBOutlet UIImageView *LogoUFC;
@property (weak, nonatomic) IBOutlet UIImageView *fluxRSS;
@property (weak, nonatomic) IBOutlet UIImageView *facebook;
@property (weak, nonatomic) IBOutlet UIImageView *twitter;
@property (weak, nonatomic) IBOutlet UIImageView *google;
//coucou
@end
