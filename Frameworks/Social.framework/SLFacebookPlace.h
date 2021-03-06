/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSURL, NSString;

@interface SLFacebookPlace : NSObject <NSCoding> {
    NSString *_category;
    double _distance;
    NSString *_identifier;
    double _latitude;
    double _longitude;
    NSString *_name;
    NSURL *_pictureURL;
}

@property(retain) NSString * category;
@property double distance;
@property(retain) NSString * identifier;
@property double latitude;
@property double longitude;
@property(retain) NSString * name;
@property(retain) NSURL * pictureURL;

+ (id)placeWithResponseDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)category;
- (id)description;
- (double)distance;
- (id)encodableProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (double)latitude;
- (double)longitude;
- (id)name;
- (id)pictureURL;
- (void)setCategory:(id)arg1;
- (void)setDistance:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setName:(id)arg1;
- (void)setPictureURL:(id)arg1;

@end
