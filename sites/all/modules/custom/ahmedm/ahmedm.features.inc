<?php
/**
 * @file
 * ahmedm.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ahmedm_node_info() {
  $items = array(
    'romance_personals' => array(
      'name' => t('Romance/Personals'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Posting Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
