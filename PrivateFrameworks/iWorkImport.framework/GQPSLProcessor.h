/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQPSLProcessor : GQPProcessor {
    Class mGenerator;
}

- (Class)generator;
- (BOOL)go;
- (id)initWithPath:(id)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(struct __CFString { }*)arg4 previewRequest:(struct __QLPreviewRequest { }*)arg5 progressiveHelper:(id)arg6 generator:(Class)arg7 zipArchive:(id)arg8 cryptoKey:(id)arg9;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(struct __CFString { }*)arg4 previewRequest:(struct __QLPreviewRequest { }*)arg5 progressiveHelper:(id)arg6 generator:(Class)arg7;
- (void)pushInitialState;

@end
