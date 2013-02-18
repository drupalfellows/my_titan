<?php
/**
 * @file
 * mt_flashcard.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mt_flashcard_taxonomy_default_vocabularies() {
  return array(
    'difficulty' => array(
      'name' => 'Difficulty',
      'machine_name' => 'difficulty',
      'description' => 'The difficulty of games, flash cards, and so on.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-9',
    ),
    'subject' => array(
      'name' => 'Subject',
      'machine_name' => 'subject',
      'description' => 'The subject that a question falls under',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-10',
    ),
  );
}
