<?php
/**
 * @file
 * maged_s_work.features.inc
 */

/**
 * Implements hook_node_info().
 */
function maged_s_work_node_info() {
  $items = array(
    'antiques_by_owner' => array(
      'name' => t('For_Sale_By_Owner'),
      'base' => 'node_content',
      'description' => t('sell anything you have'),
      'has_title' => '1',
      'title_label' => t('for sale by owner'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
