<?php
/**
 * @file
 * gig_offered.features.inc
 */

/**
 * Implements hook_node_info().
 */
function gig_offered_node_info() {
  $items = array(
    'gig_offered' => array(
      'name' => t('Gig Offered'),
      'base' => 'node_content',
      'description' => t('I\'m hiring for a short-term, small or odd job'),
      'has_title' => '1',
      'title_label' => t('posting title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
