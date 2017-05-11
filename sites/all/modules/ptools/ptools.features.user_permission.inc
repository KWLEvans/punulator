<?php
/**
 * @file
 * ptools.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ptools_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create pun content'.
  $permissions['create pun content'] = array(
    'name' => 'create pun content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create pun_review content'.
  $permissions['create pun_review content'] = array(
    'name' => 'create pun_review content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any pun content'.
  $permissions['delete any pun content'] = array(
    'name' => 'delete any pun content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any pun_review content'.
  $permissions['delete any pun_review content'] = array(
    'name' => 'delete any pun_review content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own pun content'.
  $permissions['delete own pun content'] = array(
    'name' => 'delete own pun content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own pun_review content'.
  $permissions['delete own pun_review content'] = array(
    'name' => 'delete own pun_review content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any pun content'.
  $permissions['edit any pun content'] = array(
    'name' => 'edit any pun content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any pun_review content'.
  $permissions['edit any pun_review content'] = array(
    'name' => 'edit any pun_review content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own pun content'.
  $permissions['edit own pun content'] = array(
    'name' => 'edit own pun content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own pun_review content'.
  $permissions['edit own pun_review content'] = array(
    'name' => 'edit own pun_review content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
