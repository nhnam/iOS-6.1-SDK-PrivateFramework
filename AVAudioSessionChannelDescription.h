/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface AVAudioSessionChannelDescription : NSObject
{
    void *_impl;
}

+ (id)privateCreateChannelDescriptionsArrayWithCFArray:(struct __CFArray *)arg1 portUID:(struct __CFString *)arg2;
+ (id)privateCreateWithCFDictionaryRef:(struct __CFDictionary *)arg1 portUID:(struct __CFString *)arg2 channelNumber:(unsigned long)arg3;
- (struct ChannelDescriptionImpl *)privateGetImplementation;
- (id)description;
@property(readonly) unsigned int channelNumber;
@property(readonly) NSString *owningPortUID;
@property(readonly) NSString *channelName;
- (void)dealloc;
- (id)init;

@end
