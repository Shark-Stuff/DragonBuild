//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSTCellMapChangeDescriptorDelivering-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSTConcurrentCellMap : TSPObject <NSCopying, TSTCellMapChangeDescriptorDelivering>
{
    BOOL _uidBased;
    BOOL _mayModifyFormulasInCells;
    BOOL _mayModifyValuesReferencedByFormulas;
    BOOL _applyingToTable;
    NSMutableArray *_mergeActions;
    NSMutableArray *_cellLists;
    NSMutableArray *_inverseMergeActions;
    vector_4dc5f307 _cachedRowUIDs;
    vector_4dc5f307 _cachedColumnUIDs;
}

@property(nonatomic) BOOL applyingToTable; // @synthesize applyingToTable=_applyingToTable;
@property(nonatomic) vector_4dc5f307 cachedColumnUIDs; // @synthesize cachedColumnUIDs=_cachedColumnUIDs;
@property(nonatomic) vector_4dc5f307 cachedRowUIDs; // @synthesize cachedRowUIDs=_cachedRowUIDs;
@property(retain, nonatomic) NSMutableArray *inverseMergeActions; // @synthesize inverseMergeActions=_inverseMergeActions;
@property(retain, nonatomic) NSMutableArray *cellLists; // @synthesize cellLists=_cellLists;
@property(retain, nonatomic) NSMutableArray *mergeActions; // @synthesize mergeActions=_mergeActions;
@property(nonatomic) BOOL mayModifyValuesReferencedByFormulas; // @synthesize mayModifyValuesReferencedByFormulas=_mayModifyValuesReferencedByFormulas;
@property(nonatomic) BOOL mayModifyFormulasInCells; // @synthesize mayModifyFormulasInCells=_mayModifyFormulasInCells;
@property(nonatomic, getter=isUIDBased) BOOL uidBased; // @synthesize uidBased=_uidBased;
- (id).cxx_construct;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)clearMerges;
- (BOOL)containsMergeChanges;
- (void)pushInverseMergeAction:(id)arg1;
- (void)addMergeActions:(id)arg1;
- (void)addMergeAction:(id)arg1;
- (void)convertToInverseCellMap;
- (void)willApplyToTable:(id)arg1;
- (void)enumerateCustomFormatsBeingAddedUsingReplacementBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateRowCellCountDiffUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateColumnCellCountDiffUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)updateDataListsConcurrentlyUsingCommentStorageBlock:(id /* CDUnknownBlockType */)arg1 conditionalStyleSetBlock:(id /* CDUnknownBlockType */)arg2 controlCellSpecBlock:(id /* CDUnknownBlockType */)arg3 formulaBlock:(id /* CDUnknownBlockType */)arg4 formulaErrorBlock:(id /* CDUnknownBlockType */)arg5 importWarningSetBlock:(id /* CDUnknownBlockType */)arg6 richTextBlock:(id /* CDUnknownBlockType */)arg7 stringBlock:(id /* CDUnknownBlockType */)arg8 styleBlock:(id /* CDUnknownBlockType */)arg9 customFormatBlock:(id /* CDUnknownBlockType */)arg10 formatBlock:(id /* CDUnknownBlockType */)arg11 preBNCBlock:(id /* CDUnknownBlockType */)arg12;
- (void)enumerateRowsOfCellsConcurrentlyUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)gatherRowState:(id /* CDUnknownBlockType */)arg1;
- (void)p_enumerateCellsAddedAndRemovedForFormatsWithOptions:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateCellsAddedAndRemovedOfType:(long long)arg1 withOptions:(NSUInteger)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (void)p_enumerateNewAndOldCellsSeriallyUsingPreBNCBlock:(id /* CDUnknownBlockType */)arg1;
- (void)p_enumerateNewAndOldCellsSeriallyUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateSeriallyUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)affectedBaseColumnAndRowIndexes;
- (void)clearDataListIDs;
- (id)changeDescriptorsForTable:(id)arg1;
- (void)appendCellLists:(id)arg1;
- (void)appendCellList:(id)arg1;
- (void)accumulateCurrentCellsConcurrentlyUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (const vector_4dc5f307 )columnUIDs;
- (const vector_4dc5f307 )rowUIDs;
- (void)p_cacheRowColumnUIDs;
- (vector_793e6c56)cellUIDRanges;
- (vector_1235e7c3)viewCellRects;
- (BOOL)hasMultipleCells;
- (BOOL)hasCells;
- (BOOL)containsCellBorderChanges;
- (BOOL)containsCellChanges;
- (void)convertToUuidBasedCellMapUsingTableInfo:(id)arg1 pruneCategorizedCells:(BOOL)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 uidBased:(BOOL)arg2;

@end
