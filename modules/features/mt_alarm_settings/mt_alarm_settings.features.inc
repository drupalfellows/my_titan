<?php
/**
 * @file
 * mt_alarm_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mt_alarm_settings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mt_alarm_settings_node_info() {
  $items = array(
    'alarm_setting' => array(
      'name' => t('Alarm Setting'),
      'base' => 'node_content',
      'description' => t('A content type that tracks the user settings for an alarm.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
