//
//  STDPlanetsCollectionViewController.h
//  ios-planets-objc
//
//  Created by De MicheliStefano on 01.10.18.
//  Copyright © 2018 De MicheliStefano. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STDPlanetController.h"

NS_ASSUME_NONNULL_BEGIN

@interface STDPlanetsCollectionViewController : UICollectionViewController

    @property STDPlanetController *planetController;
    @property (strong, nonatomic) NSArray *planets;
    - (void)receivePlutoMessage;
    
@end

NS_ASSUME_NONNULL_END
