<?php
/**
 * @file
 * collabco_organisation_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function collabco_organisation_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in organization_type'.
  $permissions['add terms in organization_type'] = array(
    'name' => 'add terms in organization_type',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'clear organisation_import feeds'.
  $permissions['clear organisation_import feeds'] = array(
    'name' => 'clear organisation_import feeds',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create organisation content'.
  $permissions['create organisation content'] = array(
    'name' => 'create organisation content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any organisation content'.
  $permissions['delete any organisation content'] = array(
    'name' => 'delete any organisation content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own organisation content'.
  $permissions['delete own organisation content'] = array(
    'name' => 'delete own organisation content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in organization_type'.
  $permissions['delete terms in organization_type'] = array(
    'name' => 'delete terms in organization_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any organisation content'.
  $permissions['edit any organisation content'] = array(
    'name' => 'edit any organisation content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own organisation content'.
  $permissions['edit own organisation content'] = array(
    'name' => 'edit own organisation content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in organization_type'.
  $permissions['edit terms in organization_type'] = array(
    'name' => 'edit terms in organization_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'import organisation_import feeds'.
  $permissions['import organisation_import feeds'] = array(
    'name' => 'import organisation_import feeds',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock organisation_import feeds'.
  $permissions['unlock organisation_import feeds'] = array(
    'name' => 'unlock organisation_import feeds',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
