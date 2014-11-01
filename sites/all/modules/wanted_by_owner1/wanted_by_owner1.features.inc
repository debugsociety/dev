<?php
/**
 * @file
 * wanted_by_owner1.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wanted_by_owner1_node_info() {
  $items = array(
    'craigslist' => array(
      'name' => t('Craigslist'),
      'base' => 'node_content',
      'description' => t('Craigslist for class'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
