<?php
/**
 * @file
 * mt_alarms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mt_alarms_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mt_alarms_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mt_alarms_node_info() {
  $items = array(
    'alarm' => array(
      'name' => t('Alarm'),
      'base' => 'node_content',
      'description' => t('An alarm set by a user.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
