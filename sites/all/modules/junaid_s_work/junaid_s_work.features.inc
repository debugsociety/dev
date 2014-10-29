<?php
/**
 * @file
 * junaid_s_work.features.inc
 */

/**
 * Implements hook_node_info().
 */
function junaid_s_work_node_info() {
  $items = array(
    'housing_offered_' => array(
      'name' => t('Housing Offered'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('please limit each posting to a single area and category, once per 48 hours

'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
