<?php
/**
 * @file
 * library_webpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_webpage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function library_webpage_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function library_webpage_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Short title'),
      'help' => t('For usage in menu items etc'),
    ),
  );
  return $items;
}
