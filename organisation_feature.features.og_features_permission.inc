<?php
/**
 * @file
 * organisation_feature.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function organisation_feature_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:private_group:create organisation content'
  $permissions['node:private_group:create organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:private_group:delete any organisation content'
  $permissions['node:private_group:delete any organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:private_group:delete own organisation content'
  $permissions['node:private_group:delete own organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:private_group:update any organisation content'
  $permissions['node:private_group:update any organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:private_group:update field_organisation_address field'
  $permissions['node:private_group:update field_organisation_address field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:private_group:update field_organisation_image field'
  $permissions['node:private_group:update field_organisation_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:private_group:update field_organisation_type field'
  $permissions['node:private_group:update field_organisation_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:private_group:update field_organisation_website field'
  $permissions['node:private_group:update field_organisation_website field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:private_group:update own organisation content'
  $permissions['node:private_group:update own organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:private_group:view field_organisation_address field'
  $permissions['node:private_group:view field_organisation_address field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:private_group:view field_organisation_image field'
  $permissions['node:private_group:view field_organisation_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:private_group:view field_organisation_type field'
  $permissions['node:private_group:view field_organisation_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:private_group:view field_organisation_website field'
  $permissions['node:private_group:view field_organisation_website field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:create organisation content'
  $permissions['node:group:create organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:delete any organisation content'
  $permissions['node:group:delete any organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:delete own organisation content'
  $permissions['node:group:delete own organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update any organisation content'
  $permissions['node:group:update any organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update field_organisation_address field'
  $permissions['node:group:update field_organisation_address field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update field_organisation_image field'
  $permissions['node:group:update field_organisation_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update field_organisation_type field'
  $permissions['node:group:update field_organisation_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update field_organisation_website field'
  $permissions['node:group:update field_organisation_website field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update own organisation content'
  $permissions['node:group:update own organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:view field_organisation_address field'
  $permissions['node:group:view field_organisation_address field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_organisation_image field'
  $permissions['node:group:view field_organisation_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_organisation_type field'
  $permissions['node:group:view field_organisation_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_organisation_website field'
  $permissions['node:group:view field_organisation_website field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
