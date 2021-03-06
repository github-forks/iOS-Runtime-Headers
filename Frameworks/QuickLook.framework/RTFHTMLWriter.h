/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class RTF_CMArchiveManager, NSMutableArray, RTF_OIXMLElement;

@interface RTFHTMLWriter : NSObject {
    RTF_CMArchiveManager *_archiver;
    RTF_OIXMLElement *_currentRow;
    RTF_OIXMLElement *_currentTable;
    RTF_OIXMLElement *_currentTableParagraph;
    BOOL _inited;
    NSMutableArray *_rowStack;
    int _state;
    NSMutableArray *_tableStack;
    NSMutableArray *_textBuffer;
}

- (id)_cellStyleStringFromCell:(id)arg1;
- (void)_flushParagraph:(id)arg1;
- (id)_fontNameByAppendingSerif:(id)arg1;
- (id)_paragraphStyleStringFromState:(id)arg1;
- (id)_tableStyleStringFromCell:(id)arg1;
- (id)_textBumpFromState:(id)arg1;
- (id)_textStyleStringFromState:(id)arg1;
- (void)dealloc;
- (void)finishDocumentWithState:(id)arg1;
- (id)initWithArchiver:(id)arg1;
- (void)insertAttachmentNamed:(id)arg1 withData:(id)arg2;
- (void)reader:(id)arg1 didEndTableCell:(id)arg2;
- (void)reader:(id)arg1 didParseString:(id)arg2;
- (void)readerDidEndParagraph:(id)arg1;
- (void)readerDidEndTable:(id)arg1;
- (void)readerDidEndTableRow:(id)arg1;
- (void)readerDidStartTable:(id)arg1;
- (void)readerDidStartTableRow:(id)arg1;
- (void)startDocumentWithState:(id)arg1;

@end
