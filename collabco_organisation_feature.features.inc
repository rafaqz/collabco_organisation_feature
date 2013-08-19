<?php
/**
 * @file
 * collabco_organisation_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_organisation_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function collabco_organisation_feature_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function collabco_organisation_feature_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('This is used where basic free form pages are needed in the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'organisation' => array(
      'name' => t('Organisation'),
      'base' => 'node_content',
      'description' => t('A profile for organisations'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
