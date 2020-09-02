<?php
/**
 * @file
 * tier_2_news_endpoint.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tier_2_news_endpoint_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function tier_2_news_endpoint_image_default_styles() {
  $styles = array();

  // Exported image style: full_tier2_export.
  $styles['full_tier2_export'] = array(
    'label' => 'full_tier2_export',
    'effects' => array(
      26 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => '',
          'height' => '',
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'full_tier2_export',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}
