<?php
/**
 * @file
 * mt_flashcard.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mt_flashcard_user_default_roles() {
  $roles = array();

  // Exported role: Content Editor.
  $roles['Content Editor'] = array(
    'name' => 'Content Editor',
    'weight' => '2',
  );

  return $roles;
}
