<?php
/**
 * @file
 * organisation_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function organisation_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function organisation_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function organisation_feature_node_info() {
  $items = array(
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