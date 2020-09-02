<?php
/**
 * @file
 * tu_feature_spotlight.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tu_feature_spotlight_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function tu_feature_spotlight_paragraphs_info() {
  $items = array(
    'tu_pg_spotlight' => array(
      'name' => 'Spotlight',
      'bundle' => 'tu_pg_spotlight',
      'locked' => '1',
    ),
  );
  return $items;
}
