//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RequestTemplateURL : NSObject
{
}

- (id)nonAuthenticatedSchemeInURL;
- (id)nonAuthenticatedHostNameInURL;
- (id)nonAuthenticatedServiceInURL;
- (id)serviceIdentifierInURL;
- (id)_substituteStandardURLPlaceholders:(id)arg1 account:(id)arg2 udid:(id)arg3;
- (id)_substituteNonAuthenticatedURLPlaceholders:(id)arg1;
- (id)urlWithString:(id)arg1;
- (id)unauthenticatedURLFromTemplate:(id)arg1;
- (id)urlFromTemplate:(id)arg1 account:(id)arg2 udid:(id)arg3;

@end
