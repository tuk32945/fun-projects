<?php
/**
 * @file
 * tu_feature_spotlight.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tu_feature_spotlight_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any tu_spotlight bean'.
  $permissions['create any tu_spotlight bean'] = array(
    'name' => 'create any tu_spotlight bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any tu_spotlight bean'.
  $permissions['delete any tu_spotlight bean'] = array(
    'name' => 'delete any tu_spotlight bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any tu_spotlight bean'.
  $permissions['edit any tu_spotlight bean'] = array(
    'name' => 'edit any tu_spotlight bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any tu_spotlight bean'.
  $permissions['view any tu_spotlight bean'] = array(
    'name' => 'view any tu_spotlight bean',
    'roles' => array(),
    'module' => 'bean',
  );

  return $permissions;
}
