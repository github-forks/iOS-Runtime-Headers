/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOVConnectivity : PBCodable  {
    NSMutableArray *_junctions;
}

@property(retain) NSMutableArray * junctions;


- (void)setJunctions:(id)arg1;
- (void)addJunction:(id)arg1;
- (unsigned int)junctionsCount;
- (id)junctions;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (id)junctionAtIndex:(unsigned int)arg1;
- (void)clearJunctions;
- (id)dictionaryRepresentation;

@end