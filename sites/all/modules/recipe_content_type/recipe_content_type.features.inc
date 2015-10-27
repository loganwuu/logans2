<?php
/**
 * @file
 * recipe_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function recipe_content_type_node_info() {
  $items = array(
    'recipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('new recipe'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
