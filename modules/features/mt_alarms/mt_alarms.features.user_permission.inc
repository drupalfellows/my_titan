<?php
/**
 * @file
 * mt_alarms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mt_alarms_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create alarm content.
  $permissions['create alarm content'] = array(
    'name' => 'create alarm content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own alarm content.
  $permissions['delete own alarm content'] = array(
    'name' => 'delete own alarm content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own alarm content.
  $permissions['edit own alarm content'] = array(
    'name' => 'edit own alarm content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
