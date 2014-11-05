<?php
/**
 * @file
 * nagat_s_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function nagat_s_feature_node_info() {
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
