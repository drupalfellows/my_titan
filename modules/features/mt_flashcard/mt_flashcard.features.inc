<?php
/**
 * @file
 * mt_flashcard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mt_flashcard_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mt_flashcard_node_info() {
  $items = array(
    'flashcard' => array(
      'name' => t('flashcard'),
      'base' => 'node_content',
      'description' => t('A flashcard blah blah.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
