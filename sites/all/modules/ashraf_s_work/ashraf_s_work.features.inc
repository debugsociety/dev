<?php
/**
 * @file
 * ashraf_s_work.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ashraf_s_work_node_info() {
  $items = array(
    'job_offered' => array(
      'name' => t('Job Offered'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('posting title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
