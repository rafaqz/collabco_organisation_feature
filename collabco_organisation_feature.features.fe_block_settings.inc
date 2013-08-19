<?php
/**
 * @file
 * collabco_organisation_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function collabco_organisation_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-organizations-block'] = array(
    'cache' => -1,
    'css_class' => 'iin-feature',
    'custom' => 0,
    'delta' => 'organizations-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<temporarily disabled>innovation-capabilities/*',
    'roles' => array(),
    'themes' => array(
      'openhub' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'openhub',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
