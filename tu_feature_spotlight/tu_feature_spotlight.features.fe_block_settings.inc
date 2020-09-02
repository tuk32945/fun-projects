<?php
/**
 * @file
 * tu_feature_spotlight.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tu_feature_spotlight_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-first-spotlight'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'first-spotlight',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'tu_theme_school_college' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tu_theme_school_college',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
