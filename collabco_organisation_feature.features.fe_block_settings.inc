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
    'css_class' => '',
    'custom' => 0,
    'delta' => 'organizations-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'iin_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'iin_subtheme',
        'weight' => 0,
      ),
      'openhub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'openhub',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
