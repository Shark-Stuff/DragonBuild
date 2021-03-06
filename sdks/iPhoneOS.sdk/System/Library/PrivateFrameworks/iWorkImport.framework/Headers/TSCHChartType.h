//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDMixing-Protocol.h>

@class TSCHChartFeature;

__attribute__((visibility("hidden")))
@interface TSCHChartType : NSObject <TSDMixing>
{
    TSCHChartFeature *mFeature;
}

+ (id)chartTypeForUserInterfaceTag:(long long)arg1;
+ (double)sageDepthFactorForExportingChartInfo:(id)arg1;
+ (id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1 chartType:(id)arg2 barShape:(int)arg3;
+ (id)chartTypePlaceholderForDefault3DScaleProperty;
+ (id)all3DChartTypes;
+ (id)allChartTypes;
+ (id)multiDataBubbleChart;
+ (id)multiDataScatterChart;
+ (id)multiDataBarChart;
+ (id)multiDataColumnChart;
+ (id)stackedBarChart3D;
+ (id)barChart3D;
+ (id)stackedColumnChart3D;
+ (id)donutChart3D;
+ (id)pieChart3D;
+ (id)stackedAreaChart3D;
+ (id)areaChart3D;
+ (id)lineChart3D;
+ (id)columnChart3D;
+ (id)bubbleChart;
+ (id)twoYAxisChart;
+ (id)mixedChart;
+ (id)stackedAreaChart;
+ (id)stackedColumnChart;
+ (id)stackedBarChart;
+ (id)scatterChart;
+ (id)areaChart;
+ (id)lineChart;
+ (id)columnChart;
+ (id)barChart;
+ (id)donutChart;
+ (id)pieChart;
+ (CGSize)fallbackMinimumChartBodySize;
@property(readonly, nonatomic) TSCHChartFeature *feature; // @synthesize feature=mFeature;
// - (void).cxx_destruct;
- (BOOL)supportsStartAngleRotation;
- (id)alternateArchiveChartTypeAndReturnWriterVersion:(NSUInteger )arg1 readerVersion:(NSUInteger )arg2 featureID:(id )arg3;
- (id)p_debugDescription;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (long long)userInterfaceTag;
- (id)userInterfaceNameForPlaceTitleAtCenter:(BOOL)arg1;
- (BOOL)shouldChangeExplosionWithPreviousChartType:(id)arg1 chartInfo:(id)arg2 seriesList:(id)arg3;
- (double)maxInnerRadiusPercentage;
- (double)minInnerRadiusPercentage;
- (BOOL)supportsInnerRadius;
- (BOOL)supportsPlaceTitleAtCenter;
- (BOOL)supportsCalloutLines;
- (float)defaultLabelExplosionPercentage;
- (BOOL)editableFormatForValueStrings;
- (id)localizedActionStringForWedgeExplosion;
- (id)localizedWedgeDragLabelWithPercent:(NSUInteger)arg1;
- (id)localizedTitleForDeliveryTypeWedge;
- (id)unlocalizedDeliveryTypeForWedge;
- (id)localizedDeliveryTypeForWedge;
- (id)filteredStyleOwnersFromStyleOwners:(id)arg1;
- (BOOL)supportsShowLabelsInFrontOption;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (BOOL)supportsReferenceLines;
- (int)representativeGridValueAxisType;
- (NSUInteger)gridOffsetToSeriesForScatterFormat:(int)arg1;
- (NSUInteger)maxCellsToCheckForGridValueType;
- (BOOL)supportsIncrementalResize;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsSharedAndSeparateX;
- (id)allCDESectionLabels;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (BOOL)isMultiData;
- (BOOL)supportsMultipleValuesPerSeries;
- (BOOL)supportsIndividualShadowRendering;
- (BOOL)rendersUsingRadialGeometry;
- (BOOL)hasExplodableSeriesElements;
- (BOOL)rendersBackgroundAxis;
- (BOOL)hasFixedFrameRatio;
- (BOOL)isHorizontal;
- (BOOL)supportsAxisLabelAngle;
- (BOOL)supportsCategoryAxisPlotToEdgesOption;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsCategoryAxisSeriesNames;
- (BOOL)supportsCategoryAxisMinorTickmarks;
- (BOOL)supportsTickmarks;
- (BOOL)supportsAxisLine;
- (BOOL)supportsAxisLabelsOrientation;
- (BOOL)supportsValueAxisLabelsPosition;
- (BOOL)supportsMultipleValueScales;
- (BOOL)supportsMinorGridlines;
- (BOOL)supportsElementChunking;
- (int)stackingSignRule;
- (BOOL)supportsSymbolOverhang;
- (id)supportedAxisScales;
- (BOOL)supportsPercentNumberFormatting;
- (double)defaultLabelExplosionValue;
- (BOOL)supportsLabelExplosion;
- (BOOL)supportsElementSeriesNames;
- (BOOL)supportsErrorBarsScatterX;
- (BOOL)supportsErrorBars;
- (BOOL)supportsTrendLines;
- (BOOL)suppliesFinalTextures;
- (BOOL)requiresStagesBuildingInReverse;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsEditing;
- (BOOL)supportsValueLabels;
- (BOOL)supportsSeriesStroke;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSeriesShadow;
- (BOOL)supportsSeriesLabels;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsShadowOffset;
- (BOOL)drawValueLabelsForZero;
- (BOOL)requiresYAxisOrdinal;
- (BOOL)requiresSeparateLabelsRenderPass;
- (BOOL)supportsMultipleSeriesTypes;
- (BOOL)reverseSingleColumnLegendOrder;
- (id)defaultDataFileName;
- (NSUInteger)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(long long)arg2;
- (BOOL)supportsEditingForAxisID:(id)arg1;
- (id)categoryAxisIDs;
- (id)valueAxisIDs;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsBorderFrame;
- (Class)presetImagerClass;
- (id)supportedSeriesTypes;
- (Class)sageGeometeryHelperClass;
- (Class)repClass;
- (Class)layoutClass;
- (Class)chartLayoutClass;
- (Class)chartLayoutItemClass;
- (id)defaultSeriesType:(NSUInteger)arg1;
- (id)userInterfaceName;
- (BOOL)approximatesTitleAccommodationUsingLegendSize;
- (CGSize)minimumChartBodySizeForTransformingGeometry;
- (CGSize)minimumChartBodySize;
- (id)animationDeliveryStylesForFilter:(id)arg1;
- (BOOL)explosionAffectsChartBodyBounds;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (UIEdgeInsets)swatchImageEdgeInsetsForSize:(CGSize)arg1;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(CGSize)arg3 imageScale:(double)arg4 swatchFrame:(CGRect)arg5 documentRoot:(id)arg6 shouldCache:(BOOL )arg7;
- (int)chartBodyBoundsDefinition;
- (BOOL)supportsCategoryAxisLabels;
- (NSUInteger)presentationDimension;
- (id)otherDimensionChartType;
@property(readonly, nonatomic) BOOL is3D;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithFeatureClass:(Class)arg1;
- (id)init;
- (double)categoryAxisTitleRotation;
- (double)valueAxisTitleRotation;
- (id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2;
- (float)rotation3DMaxY;
- (float)rotation3DMinY;
- (float)rotation3DMaxX;
- (float)rotation3DMinX;
- (struct TSCH3DChartRotationLimit)rotation3DLimit;
- (CGSize)mungeBodySize:(CGSize)arg1;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;
- (int)deprecated3DShadowSpecificProperty;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (id)g_genericToSpecificPropertyMapBubble;
- (id)g_genericToSpecificPropertyMapTwoAxis;
- (id)g_genericToSpecificPropertyMapMixed;
- (id)g_genericToSpecificPropertyMapStackedArea;
- (id)g_genericToSpecificPropertyMapStackedBar;
- (id)g_genericToSpecificPropertyMapStackedColumn;
- (id)g_genericToSpecificPropertyMapScatter;
- (id)g_genericToSpecificPropertyMapLine;
- (id)g_genericToSpecificPropertyMapArea;
- (id)g_genericToSpecificPropertyMapColumn;
- (id)g_genericToSpecificPropertyMapBar;
- (id)g_genericToSpecificPropertyMapDonut;
- (id)g_genericToSpecificPropertyMapPie;

@end

