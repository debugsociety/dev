<?php
/**
 * @file
 * for_sale_by_dealer.features.inc
 */

/**
 * Implements hook_node_info().
 */
function for_sale_by_dealer_node_info() {
  $items = array(
    'forsalebydealer' => array(
      'name' => t('For Sale by Dealer'),
      'base' => 'node_content',
      'description' => t('for sale by dealer'),
      'has_title' => '1',
      'title_label' => t('posting title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
